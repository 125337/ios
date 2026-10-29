@interface MessageTipsViewModel : BaseChatViewModel
{
    unsigned long long _tipsType; // +0x28
    CMessageWrap * _msgWrap; // +0x30
    NSString * _wording; // +0x38
}
- (id)initWithTipsType:(unsigned long long)arg1 wording:(id)arg2;
- (id)cellViewClassName;
- (CGSize)measure:(CGSize)arg1;
- (id)getTipsWording;
- (id)systemTextFont;
- (unsigned long long)tipsType;
- (void)setTipsType:(unsigned long long)arg1;
- (id)msgWrap;
- (void)setMsgWrap:(id)arg1;
- (id)wording;
- (void)setWording:(id)arg1;
- (void).cxx_destruct;
@end

