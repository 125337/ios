@interface WCCardPkgMsgAcceptItem : NSObject
{
    unsigned int endTime; // +0x8
    unsigned int actionType; // +0xc
    NSString * title; // +0x10
    NSString * subTitle; // +0x18
    NSString * cardId; // +0x20
    NSString * cardExt; // +0x28
}
- (BOOL)IsAcceptItemValid;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subTitle;
- (void)setSubTitle:(id)arg1;
- (id)cardId;
- (void)setCardId:(id)arg1;
- (id)cardExt;
- (void)setCardExt:(id)arg1;
- (unsigned int)endTime;
- (void)setEndTime:(unsigned int)arg1;
- (unsigned int)actionType;
- (void)setActionType:(unsigned int)arg1;
- (void).cxx_destruct;
@end
