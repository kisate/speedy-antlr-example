
// Generated from KotlinParser.g4 by ANTLR 4.9.2

#pragma once


#include "antlr4-runtime.h"
#include "KotlinParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by KotlinParser.
 */
class  KotlinParserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by KotlinParser.
   */
    virtual antlrcpp::Any visitKotlinFile(KotlinParser::KotlinFileContext *context) = 0;

    virtual antlrcpp::Any visitScript(KotlinParser::ScriptContext *context) = 0;

    virtual antlrcpp::Any visitShebangLine(KotlinParser::ShebangLineContext *context) = 0;

    virtual antlrcpp::Any visitFileAnnotation(KotlinParser::FileAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitPackageHeader(KotlinParser::PackageHeaderContext *context) = 0;

    virtual antlrcpp::Any visitImportList(KotlinParser::ImportListContext *context) = 0;

    virtual antlrcpp::Any visitImportHeader(KotlinParser::ImportHeaderContext *context) = 0;

    virtual antlrcpp::Any visitImportAlias(KotlinParser::ImportAliasContext *context) = 0;

    virtual antlrcpp::Any visitTopLevelObject(KotlinParser::TopLevelObjectContext *context) = 0;

    virtual antlrcpp::Any visitTypeAlias(KotlinParser::TypeAliasContext *context) = 0;

    virtual antlrcpp::Any visitDeclaration(KotlinParser::DeclarationContext *context) = 0;

    virtual antlrcpp::Any visitClassDeclaration(KotlinParser::ClassDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryConstructor(KotlinParser::PrimaryConstructorContext *context) = 0;

    virtual antlrcpp::Any visitClassBody(KotlinParser::ClassBodyContext *context) = 0;

    virtual antlrcpp::Any visitClassParameters(KotlinParser::ClassParametersContext *context) = 0;

    virtual antlrcpp::Any visitClassParameter(KotlinParser::ClassParameterContext *context) = 0;

    virtual antlrcpp::Any visitDelegationSpecifiers(KotlinParser::DelegationSpecifiersContext *context) = 0;

    virtual antlrcpp::Any visitDelegationSpecifier(KotlinParser::DelegationSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitConstructorInvocation(KotlinParser::ConstructorInvocationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotatedDelegationSpecifier(KotlinParser::AnnotatedDelegationSpecifierContext *context) = 0;

    virtual antlrcpp::Any visitExplicitDelegation(KotlinParser::ExplicitDelegationContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameters(KotlinParser::TypeParametersContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameter(KotlinParser::TypeParameterContext *context) = 0;

    virtual antlrcpp::Any visitTypeConstraints(KotlinParser::TypeConstraintsContext *context) = 0;

    virtual antlrcpp::Any visitTypeConstraint(KotlinParser::TypeConstraintContext *context) = 0;

    virtual antlrcpp::Any visitClassMemberDeclarations(KotlinParser::ClassMemberDeclarationsContext *context) = 0;

    virtual antlrcpp::Any visitClassMemberDeclaration(KotlinParser::ClassMemberDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitAnonymousInitializer(KotlinParser::AnonymousInitializerContext *context) = 0;

    virtual antlrcpp::Any visitCompanionObject(KotlinParser::CompanionObjectContext *context) = 0;

    virtual antlrcpp::Any visitFunctionValueParameters(KotlinParser::FunctionValueParametersContext *context) = 0;

    virtual antlrcpp::Any visitFunctionValueParameter(KotlinParser::FunctionValueParameterContext *context) = 0;

    virtual antlrcpp::Any visitFunctionDeclaration(KotlinParser::FunctionDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitFunctionBody(KotlinParser::FunctionBodyContext *context) = 0;

    virtual antlrcpp::Any visitVariableDeclaration(KotlinParser::VariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitMultiVariableDeclaration(KotlinParser::MultiVariableDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPropertyDeclaration(KotlinParser::PropertyDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitPropertyDelegate(KotlinParser::PropertyDelegateContext *context) = 0;

    virtual antlrcpp::Any visitGetter(KotlinParser::GetterContext *context) = 0;

    virtual antlrcpp::Any visitSetter(KotlinParser::SetterContext *context) = 0;

    virtual antlrcpp::Any visitParametersWithOptionalType(KotlinParser::ParametersWithOptionalTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionValueParameterWithOptionalType(KotlinParser::FunctionValueParameterWithOptionalTypeContext *context) = 0;

    virtual antlrcpp::Any visitParameterWithOptionalType(KotlinParser::ParameterWithOptionalTypeContext *context) = 0;

    virtual antlrcpp::Any visitParameter(KotlinParser::ParameterContext *context) = 0;

    virtual antlrcpp::Any visitObjectDeclaration(KotlinParser::ObjectDeclarationContext *context) = 0;

    virtual antlrcpp::Any visitSecondaryConstructor(KotlinParser::SecondaryConstructorContext *context) = 0;

    virtual antlrcpp::Any visitConstructorDelegationCall(KotlinParser::ConstructorDelegationCallContext *context) = 0;

    virtual antlrcpp::Any visitEnumClassBody(KotlinParser::EnumClassBodyContext *context) = 0;

    virtual antlrcpp::Any visitEnumEntries(KotlinParser::EnumEntriesContext *context) = 0;

    virtual antlrcpp::Any visitEnumEntry(KotlinParser::EnumEntryContext *context) = 0;

    virtual antlrcpp::Any visitType(KotlinParser::TypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeReference(KotlinParser::TypeReferenceContext *context) = 0;

    virtual antlrcpp::Any visitNullableType(KotlinParser::NullableTypeContext *context) = 0;

    virtual antlrcpp::Any visitQuest(KotlinParser::QuestContext *context) = 0;

    virtual antlrcpp::Any visitUserType(KotlinParser::UserTypeContext *context) = 0;

    virtual antlrcpp::Any visitSimpleUserType(KotlinParser::SimpleUserTypeContext *context) = 0;

    virtual antlrcpp::Any visitTypeProjection(KotlinParser::TypeProjectionContext *context) = 0;

    virtual antlrcpp::Any visitTypeProjectionModifiers(KotlinParser::TypeProjectionModifiersContext *context) = 0;

    virtual antlrcpp::Any visitTypeProjectionModifier(KotlinParser::TypeProjectionModifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionType(KotlinParser::FunctionTypeContext *context) = 0;

    virtual antlrcpp::Any visitFunctionTypeParameters(KotlinParser::FunctionTypeParametersContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedType(KotlinParser::ParenthesizedTypeContext *context) = 0;

    virtual antlrcpp::Any visitReceiverType(KotlinParser::ReceiverTypeContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedUserType(KotlinParser::ParenthesizedUserTypeContext *context) = 0;

    virtual antlrcpp::Any visitStatements(KotlinParser::StatementsContext *context) = 0;

    virtual antlrcpp::Any visitStatement(KotlinParser::StatementContext *context) = 0;

    virtual antlrcpp::Any visitLabel(KotlinParser::LabelContext *context) = 0;

    virtual antlrcpp::Any visitControlStructureBody(KotlinParser::ControlStructureBodyContext *context) = 0;

    virtual antlrcpp::Any visitBlock(KotlinParser::BlockContext *context) = 0;

    virtual antlrcpp::Any visitLoopStatement(KotlinParser::LoopStatementContext *context) = 0;

    virtual antlrcpp::Any visitForStatement(KotlinParser::ForStatementContext *context) = 0;

    virtual antlrcpp::Any visitWhileStatement(KotlinParser::WhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitDoWhileStatement(KotlinParser::DoWhileStatementContext *context) = 0;

    virtual antlrcpp::Any visitAssignment(KotlinParser::AssignmentContext *context) = 0;

    virtual antlrcpp::Any visitSemi(KotlinParser::SemiContext *context) = 0;

    virtual antlrcpp::Any visitSemis(KotlinParser::SemisContext *context) = 0;

    virtual antlrcpp::Any visitExpression(KotlinParser::ExpressionContext *context) = 0;

    virtual antlrcpp::Any visitDisjunction(KotlinParser::DisjunctionContext *context) = 0;

    virtual antlrcpp::Any visitConjunction(KotlinParser::ConjunctionContext *context) = 0;

    virtual antlrcpp::Any visitEquality(KotlinParser::EqualityContext *context) = 0;

    virtual antlrcpp::Any visitComparison(KotlinParser::ComparisonContext *context) = 0;

    virtual antlrcpp::Any visitGenericCallLikeComparison(KotlinParser::GenericCallLikeComparisonContext *context) = 0;

    virtual antlrcpp::Any visitInfixOperation(KotlinParser::InfixOperationContext *context) = 0;

    virtual antlrcpp::Any visitElvisExpression(KotlinParser::ElvisExpressionContext *context) = 0;

    virtual antlrcpp::Any visitElvis(KotlinParser::ElvisContext *context) = 0;

    virtual antlrcpp::Any visitInfixFunctionCall(KotlinParser::InfixFunctionCallContext *context) = 0;

    virtual antlrcpp::Any visitRangeExpression(KotlinParser::RangeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveExpression(KotlinParser::AdditiveExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeExpression(KotlinParser::MultiplicativeExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAsExpression(KotlinParser::AsExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPrefixUnaryExpression(KotlinParser::PrefixUnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitUnaryPrefix(KotlinParser::UnaryPrefixContext *context) = 0;

    virtual antlrcpp::Any visitPostfixUnaryExpression(KotlinParser::PostfixUnaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitPostfixUnarySuffix(KotlinParser::PostfixUnarySuffixContext *context) = 0;

    virtual antlrcpp::Any visitDirectlyAssignableExpression(KotlinParser::DirectlyAssignableExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedDirectlyAssignableExpression(KotlinParser::ParenthesizedDirectlyAssignableExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignableExpression(KotlinParser::AssignableExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedAssignableExpression(KotlinParser::ParenthesizedAssignableExpressionContext *context) = 0;

    virtual antlrcpp::Any visitAssignableSuffix(KotlinParser::AssignableSuffixContext *context) = 0;

    virtual antlrcpp::Any visitIndexingSuffix(KotlinParser::IndexingSuffixContext *context) = 0;

    virtual antlrcpp::Any visitNavigationSuffix(KotlinParser::NavigationSuffixContext *context) = 0;

    virtual antlrcpp::Any visitCallSuffix(KotlinParser::CallSuffixContext *context) = 0;

    virtual antlrcpp::Any visitAnnotatedLambda(KotlinParser::AnnotatedLambdaContext *context) = 0;

    virtual antlrcpp::Any visitTypeArguments(KotlinParser::TypeArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitValueArguments(KotlinParser::ValueArgumentsContext *context) = 0;

    virtual antlrcpp::Any visitValueArgument(KotlinParser::ValueArgumentContext *context) = 0;

    virtual antlrcpp::Any visitPrimaryExpression(KotlinParser::PrimaryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitParenthesizedExpression(KotlinParser::ParenthesizedExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCollectionLiteral(KotlinParser::CollectionLiteralContext *context) = 0;

    virtual antlrcpp::Any visitLiteralConstant(KotlinParser::LiteralConstantContext *context) = 0;

    virtual antlrcpp::Any visitStringLiteral(KotlinParser::StringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitLineStringLiteral(KotlinParser::LineStringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitMultiLineStringLiteral(KotlinParser::MultiLineStringLiteralContext *context) = 0;

    virtual antlrcpp::Any visitLineStringContent(KotlinParser::LineStringContentContext *context) = 0;

    virtual antlrcpp::Any visitLineStringExpression(KotlinParser::LineStringExpressionContext *context) = 0;

    virtual antlrcpp::Any visitMultiLineStringContent(KotlinParser::MultiLineStringContentContext *context) = 0;

    virtual antlrcpp::Any visitMultiLineStringExpression(KotlinParser::MultiLineStringExpressionContext *context) = 0;

    virtual antlrcpp::Any visitLambdaLiteral(KotlinParser::LambdaLiteralContext *context) = 0;

    virtual antlrcpp::Any visitLambdaParameters(KotlinParser::LambdaParametersContext *context) = 0;

    virtual antlrcpp::Any visitLambdaParameter(KotlinParser::LambdaParameterContext *context) = 0;

    virtual antlrcpp::Any visitAnonymousFunction(KotlinParser::AnonymousFunctionContext *context) = 0;

    virtual antlrcpp::Any visitFunctionLiteral(KotlinParser::FunctionLiteralContext *context) = 0;

    virtual antlrcpp::Any visitObjectLiteral(KotlinParser::ObjectLiteralContext *context) = 0;

    virtual antlrcpp::Any visitThisExpression(KotlinParser::ThisExpressionContext *context) = 0;

    virtual antlrcpp::Any visitSuperExpression(KotlinParser::SuperExpressionContext *context) = 0;

    virtual antlrcpp::Any visitIfExpression(KotlinParser::IfExpressionContext *context) = 0;

    virtual antlrcpp::Any visitWhenSubject(KotlinParser::WhenSubjectContext *context) = 0;

    virtual antlrcpp::Any visitWhenExpression(KotlinParser::WhenExpressionContext *context) = 0;

    virtual antlrcpp::Any visitWhenEntry(KotlinParser::WhenEntryContext *context) = 0;

    virtual antlrcpp::Any visitWhenCondition(KotlinParser::WhenConditionContext *context) = 0;

    virtual antlrcpp::Any visitRangeTest(KotlinParser::RangeTestContext *context) = 0;

    virtual antlrcpp::Any visitTypeTest(KotlinParser::TypeTestContext *context) = 0;

    virtual antlrcpp::Any visitTryExpression(KotlinParser::TryExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCatchBlock(KotlinParser::CatchBlockContext *context) = 0;

    virtual antlrcpp::Any visitFinallyBlock(KotlinParser::FinallyBlockContext *context) = 0;

    virtual antlrcpp::Any visitJumpExpression(KotlinParser::JumpExpressionContext *context) = 0;

    virtual antlrcpp::Any visitCallableReference(KotlinParser::CallableReferenceContext *context) = 0;

    virtual antlrcpp::Any visitAssignmentAndOperator(KotlinParser::AssignmentAndOperatorContext *context) = 0;

    virtual antlrcpp::Any visitEqualityOperator(KotlinParser::EqualityOperatorContext *context) = 0;

    virtual antlrcpp::Any visitComparisonOperator(KotlinParser::ComparisonOperatorContext *context) = 0;

    virtual antlrcpp::Any visitInOperator(KotlinParser::InOperatorContext *context) = 0;

    virtual antlrcpp::Any visitIsOperator(KotlinParser::IsOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAdditiveOperator(KotlinParser::AdditiveOperatorContext *context) = 0;

    virtual antlrcpp::Any visitMultiplicativeOperator(KotlinParser::MultiplicativeOperatorContext *context) = 0;

    virtual antlrcpp::Any visitAsOperator(KotlinParser::AsOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPrefixUnaryOperator(KotlinParser::PrefixUnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitPostfixUnaryOperator(KotlinParser::PostfixUnaryOperatorContext *context) = 0;

    virtual antlrcpp::Any visitExcl(KotlinParser::ExclContext *context) = 0;

    virtual antlrcpp::Any visitMemberAccessOperator(KotlinParser::MemberAccessOperatorContext *context) = 0;

    virtual antlrcpp::Any visitSafeNav(KotlinParser::SafeNavContext *context) = 0;

    virtual antlrcpp::Any visitModifiers(KotlinParser::ModifiersContext *context) = 0;

    virtual antlrcpp::Any visitParameterModifiers(KotlinParser::ParameterModifiersContext *context) = 0;

    virtual antlrcpp::Any visitModifier(KotlinParser::ModifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeModifiers(KotlinParser::TypeModifiersContext *context) = 0;

    virtual antlrcpp::Any visitTypeModifier(KotlinParser::TypeModifierContext *context) = 0;

    virtual antlrcpp::Any visitClassModifier(KotlinParser::ClassModifierContext *context) = 0;

    virtual antlrcpp::Any visitMemberModifier(KotlinParser::MemberModifierContext *context) = 0;

    virtual antlrcpp::Any visitVisibilityModifier(KotlinParser::VisibilityModifierContext *context) = 0;

    virtual antlrcpp::Any visitVarianceModifier(KotlinParser::VarianceModifierContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterModifiers(KotlinParser::TypeParameterModifiersContext *context) = 0;

    virtual antlrcpp::Any visitTypeParameterModifier(KotlinParser::TypeParameterModifierContext *context) = 0;

    virtual antlrcpp::Any visitFunctionModifier(KotlinParser::FunctionModifierContext *context) = 0;

    virtual antlrcpp::Any visitPropertyModifier(KotlinParser::PropertyModifierContext *context) = 0;

    virtual antlrcpp::Any visitInheritanceModifier(KotlinParser::InheritanceModifierContext *context) = 0;

    virtual antlrcpp::Any visitParameterModifier(KotlinParser::ParameterModifierContext *context) = 0;

    virtual antlrcpp::Any visitReificationModifier(KotlinParser::ReificationModifierContext *context) = 0;

    virtual antlrcpp::Any visitPlatformModifier(KotlinParser::PlatformModifierContext *context) = 0;

    virtual antlrcpp::Any visitAnnotation(KotlinParser::AnnotationContext *context) = 0;

    virtual antlrcpp::Any visitSingleAnnotation(KotlinParser::SingleAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitMultiAnnotation(KotlinParser::MultiAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitAnnotationUseSiteTarget(KotlinParser::AnnotationUseSiteTargetContext *context) = 0;

    virtual antlrcpp::Any visitUnescapedAnnotation(KotlinParser::UnescapedAnnotationContext *context) = 0;

    virtual antlrcpp::Any visitSimpleIdentifier(KotlinParser::SimpleIdentifierContext *context) = 0;

    virtual antlrcpp::Any visitIdentifier(KotlinParser::IdentifierContext *context) = 0;


};

