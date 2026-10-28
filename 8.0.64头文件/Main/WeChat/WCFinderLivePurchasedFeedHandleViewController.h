@interface WCFinderLivePurchasedFeedHandleViewController : MMCPUIViewController
{
    BOOL _showTicket; // +0x70
    int _scene; // +0x74
    WCFinderDataItem * _dataItem; // +0x78
    UIColor * _imageColor; // +0x80
    UIImageView * _tipImageView; // +0x88
    MMUILabel * _titleLabel; // +0x90
    MMUIButton * _cancelButton; // +0x98
    MMUIButton * _ticketButton; // +0xa0
    NSString * _titleText; // +0xa8
}
- (void)viewDidLoad;
- (void)updateDataItem:(id)arg1;
- (void)updateScene:(int)arg1 titleText:(id)arg2;
- (void)createUI;
- (void)onReturn;
- (void)updateData;
- (void)layoutUI;
- (id)tipImageView;
- (id)titleLabel;
- (id)cancelButton;
- (id)ticketButton;
- (void)cancelButtonClick;
- (void)ticketButtonClick;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)imageColor;
- (void)setImageColor:(id)arg1;
- (BOOL)showTicket;
- (void)setShowTicket:(BOOL)arg1;
- (void)setTipImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setTicketButton:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
