@interface WCSnsOperation : MMObject <PBCoding>
{
    WCSnsSocialInfluenceInfo * _socialInfluenceInfo; // +0x8
    WCSnsPreLoadInfo * _preloadInfo; // +0x10
    WCSnsDelayShowInfo * _delayShowInfo; // +0x18
    WCSnsRepeatUrlInfo * _repeatUrlInfo; // +0x20
}
+ (void)PBArrayAdd_socialInfluenceInfo;
+ (void)PBArrayAdd_preloadInfo;
+ (void)PBArrayAdd_delayShowInfo;
+ (void)PBArrayAdd_repeatUrlInfo;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)socialInfluenceInfo;
- (void)setSocialInfluenceInfo:(id)arg1;
- (id)preloadInfo;
- (void)setPreloadInfo:(id)arg1;
- (id)delayShowInfo;
- (void)setDelayShowInfo:(id)arg1;
- (id)repeatUrlInfo;
- (void)setRepeatUrlInfo:(id)arg1;
- (void).cxx_destruct;
@end
