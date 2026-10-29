@interface BSAffMsgExtraData : NSObject
{
    unsigned int _msgType; // +0x8
    unsigned int _recNativeCardStyle; // +0xc
    NSString * _recInfo; // +0x10
    NSString * _extraData; // +0x18
    NSString * _reportInfo; // +0x20
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
- (void).cxx_destruct;
@end

