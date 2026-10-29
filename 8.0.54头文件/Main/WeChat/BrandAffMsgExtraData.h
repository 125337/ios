@interface BrandAffMsgExtraData : NSObject
{
    unsigned int _msgType; // +0x8
    unsigned int _recNativeCardStyle; // +0xc
    unsigned int _recStyle; // +0x10
    NSString * _recInfo; // +0x18
    NSString * _extraData; // +0x20
    NSString * _reportInfo; // +0x28
    NSString * _recAccountUsername; // +0x30
    NSString * _recContentUrl; // +0x38
    NSString * _reddotReportInfo; // +0x40
}
- (unsigned int)msgType;
- (void)setMsgType:(unsigned int)arg1;
- (id)recInfo;
- (void)setRecInfo:(id)arg1;
- (unsigned int)recNativeCardStyle;
- (void)setRecNativeCardStyle:(unsigned int)arg1;
- (id)extraData;
- (void)setExtraData:(id)arg1;
- (id)reportInfo;
- (void)setReportInfo:(id)arg1;
- (id)recAccountUsername;
- (void)setRecAccountUsername:(id)arg1;
- (unsigned int)recStyle;
- (void)setRecStyle:(unsigned int)arg1;
- (id)recContentUrl;
- (void)setRecContentUrl:(id)arg1;
- (id)reddotReportInfo;
- (void)setReddotReportInfo:(id)arg1;
- (void).cxx_destruct;
@end

