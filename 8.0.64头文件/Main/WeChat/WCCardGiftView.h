@interface WCCardGiftView : MMUIView
{
    NSString * _userName; // +0x8
    NSString * _displayName; // +0x10
    NSString * _detail; // +0x18
    BOOL _bIsMemberCard; // +0x20
    id <WCCardGiftViewDelegate> delegate; // +0x28
    UIColor * _displayColor; // +0x30
    UIColor * _detailColor; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)dealloc;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)userName;
- (void)setUserName:(id)arg1;
- (id)displayName;
- (void)setDisplayName:(id)arg1;
- (id)detail;
- (void)setDetail:(id)arg1;
- (BOOL)bIsMemberCard;
- (void)setBIsMemberCard:(BOOL)arg1;
- (id)displayColor;
- (void)setDisplayColor:(id)arg1;
- (id)detailColor;
- (void)setDetailColor:(id)arg1;
- (void).cxx_destruct;
@end
