@interface BrandTimelineResortDigestUtil : MMObject
+ (BOOL)isDigestInfoValid:(id)arg1;
+ (id)toJsonWithDigestInfo:(id)arg1;
+ (id)genAttrDigestWithBrandTimelineMsgDBDigestInfo:(id)arg1 shouldBold:(BOOL)arg2;
+ (id)genReportDigestWithBrandTimelineMsgDBDigestInfo:(id)arg1;
+ (BOOL)shouldUseResortAttrDigest:(id)arg1;
+ (id)genFusionDigestInfo:(id)arg1;
+ (id)getBrandTimelineMsgWrapFromDb:(id)arg1;
@end
