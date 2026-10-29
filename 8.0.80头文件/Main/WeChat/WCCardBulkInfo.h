@interface WCCardBulkInfo : MMObject
{
    BOOL _acceptButtonStatus; // +0x8
    unsigned int _privateStatus; // +0xc
    NSMutableArray * _cardDataList; // +0x10
    NSString * _acceptButtonWording; // +0x18
    NSString * _privateWording; // +0x20
}
- (id)cardDataList;
- (void)setCardDataList:(id)arg1;
- (id)acceptButtonWording;
- (void)setAcceptButtonWording:(id)arg1;
- (unsigned int)privateStatus;
- (void)setPrivateStatus:(unsigned int)arg1;
- (BOOL)acceptButtonStatus;
- (void)setAcceptButtonStatus:(BOOL)arg1;
- (id)privateWording;
- (void)setPrivateWording:(id)arg1;
- (void).cxx_destruct;
@end
