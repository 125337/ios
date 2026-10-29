@interface BrandProfileShareHelper : MMObject
+ (id)genDictExtraInfoWithContact:(id)arg1 bizNameCard:(id)arg2;
+ (id)certificationImageWithCertFlag:(unsigned int)arg1 size:(CGSize)arg2;
+ (id)bizNameCardProtectedInfoWithContent:(id)arg1;
+ (BOOL)shouldBrandContactShareCardShowCertificationFlag:(id)arg1 protectedInfo:(id)arg2;
+ (BOOL)shouldBrandContactShareCardShowPersonalVerifyIdentity:(id)arg1 protectedInfo:(id)arg2;
+ (id)brandContactShareCardCertificationImage:(id)arg1 protectedInfo:(id)arg2 size:(CGSize)arg3;
+ (id)brandContactShareCardPersonalVerifyIdentity:(id)arg1 protectedInfo:(id)arg2;
@end

