@interface WCFinderRecommendInfo : NSObject <WCTTableCoding>
{
    int _recommendType; // +0x8
    NSString * _tid; // +0x10
    unsigned long long _scene; // +0x18
    NSString * _recommendReason; // +0x20
    unsigned long long _orgRecommendType; // +0x28
    FinderFlowCardRecommendReason * _flowCardRecommandReasonInfo; // +0x30
    NSString * _flowDescTitle; // +0x38
    NSString * _innerRecommendReason; // +0x40
    DynamicReason * _dynamicReason; // +0x48
    FinderObjectWordingInfo * _asyncReasonInfo; // +0x50
}
+ (const void *)objectRelationalMapping;
+ (const void *)allProperties;
+ (id)allBridgeProperties;
+ (id)__wcdbtyper;
+ (const void *)tid;
+ (const void *)__wcdb_synthesize_0:(void *)arg1;
+ (id)swift_tid;
+ (const void *)recommendType;
+ (const void *)__wcdb_synthesize_1:(void *)arg1;
+ (id)swift_recommendType;
+ (const void *)recommendReason;
+ (const void *)__wcdb_synthesize_2:(void *)arg1;
+ (id)swift_recommendReason;
+ (const void *)orgRecommendType;
+ (const void *)__wcdb_synthesize_3:(void *)arg1;
+ (id)swift_orgRecommendType;
+ (const void *)scene;
+ (const void *)__wcdb_synthesize_4:(void *)arg1;
+ (id)swift_scene;
+ (const void *)flowCardRecommandReasonInfo;
+ (const void *)__wcdb_synthesize_5:(void *)arg1;
+ (id)swift_flowCardRecommandReasonInfo;
+ (const void *)flowDescTitle;
+ (const void *)__wcdb_synthesize_6:(void *)arg1;
+ (id)swift_flowDescTitle;
+ (const void *)dynamicReason;
+ (const void *)__wcdb_synthesize_7:(void *)arg1;
+ (id)swift_dynamicReason;
+ (const void *)innerRecommendReason;
+ (const void *)__wcdb_synthesize_8:(void *)arg1;
+ (id)swift_innerRecommendReason;
+ (const void *)asyncReasonInfo;
+ (const void *)__wcdb_synthesize_9:(void *)arg1;
+ (id)swift_asyncReasonInfo;
+ (void)__wcdb_table_constraint_10:(void *)arg1;
+ (void)__wcdb_table_constraint_11:(void *)arg1;
- (id)description;
- (id)tid;
- (void)setTid:(id)arg1;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (int)recommendType;
- (void)setRecommendType:(int)arg1;
- (id)recommendReason;
- (void)setRecommendReason:(id)arg1;
- (unsigned long long)orgRecommendType;
- (void)setOrgRecommendType:(unsigned long long)arg1;
- (id)flowCardRecommandReasonInfo;
- (void)setFlowCardRecommandReasonInfo:(id)arg1;
- (id)flowDescTitle;
- (void)setFlowDescTitle:(id)arg1;
- (id)innerRecommendReason;
- (void)setInnerRecommendReason:(id)arg1;
- (id)dynamicReason;
- (void)setDynamicReason:(id)arg1;
- (id)asyncReasonInfo;
- (void)setAsyncReasonInfo:(id)arg1;
- (void).cxx_destruct;
@end

