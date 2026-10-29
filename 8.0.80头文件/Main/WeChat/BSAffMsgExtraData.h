@interface BSAffMsgExtraData : NSObject
{
    BOOL _isBoxUp; // +0x8
    BOOL _isMixDigest; // +0x9
    BOOL _showBox; // +0xa
    unsigned int _msgType; // +0xc
    unsigned int _recNativeCardStyle; // +0x10
    NSString * _recInfo; // +0x18
    NSString * _extraData; // +0x20
    NSString * _reportInfo; // +0x28
    NSString * _recCardId; // +0x30
    NSString * _richTextWording; // +0x38
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
- (id)recCardId;
- (void)setRecCardId:(id)arg1;
- (id)richTextWording;
- (void)setRichTextWording:(id)arg1;
- (BOOL)isBoxUp;
- (void)setIsBoxUp:(BOOL)arg1;
- (BOOL)isMixDigest;
- (void)setIsMixDigest:(BOOL)arg1;
- (BOOL)showBox;
- (void)setShowBox:(BOOL)arg1;
- (void).cxx_destruct;
@end
