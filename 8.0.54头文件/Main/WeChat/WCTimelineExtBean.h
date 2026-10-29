@interface WCTimelineExtBean : NSObject <NSCoding, PBCoding>
{
    BOOL _isTigerEnabled; // +0x8
    WCTimelineInputAction * _inputAction; // +0x10
    SnsExtStatData * _snsExtStatData; // +0x18
    NSMutableArray * _uploadResponseRetCodeArr; // +0x20
    SnsExtSpamInfoMsg * _snsExtSpamInfo; // +0x28
    long long _springContentStyle; // +0x30
    WCMomentsInputAreaReportInfo * _inputAreaReportInfo; // +0x38
}
+ (void)PBArrayAdd_inputAction;
+ (void)PBArrayAdd_snsExtStatData;
+ (void)PBArrayAdd_uploadResponseRetCodeArr;
+ (void)PBArrayAdd_isTigerEnabled;
+ (void)PBArrayAdd_springContentStyle;
+ (void)PBArrayAdd_snsExtSpamInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)ensureInputAction;
- (id)ensureSnsExtStatData;
- (id)ensureUploadResponseRetCodeArr;
- (id)ensureSnsExtSpamInfo;
- (id)inputAction;
- (void)setInputAction:(id)arg1;
- (id)snsExtStatData;
- (void)setSnsExtStatData:(id)arg1;
- (id)uploadResponseRetCodeArr;
- (void)setUploadResponseRetCodeArr:(id)arg1;
- (id)snsExtSpamInfo;
- (void)setSnsExtSpamInfo:(id)arg1;
- (long long)springContentStyle;
- (void)setSpringContentStyle:(long long)arg1;
- (BOOL)isTigerEnabled;
- (void)setIsTigerEnabled:(BOOL)arg1;
- (id)inputAreaReportInfo;
- (void)setInputAreaReportInfo:(id)arg1;
- (void).cxx_destruct;
@end

