@interface MMLiveLayoutOrientationTrait : NSObject <UINSIntegerTraitDefinition>
+ (long long)defaultValue;
+ (id)identifier;
+ (id)name;
+ (long long)layoutOrientationForContainerView:(id)arg1;
+ (void)injectTraitForContainerView:(id)arg1 intoOverrides:(id)arg2;
@end
