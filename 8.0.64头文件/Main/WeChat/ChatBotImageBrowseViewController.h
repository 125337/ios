@interface ChatBotImageBrowseViewController : MMUIViewController
{
    ChatBotSnapLinksCellData * _data; // +0x70
    MMUIButton * _backBtn; // +0x78
    UILabel * _titleLabel; // +0x80
    UILabel * _dateLabel; // +0x88
    ChatBotImageBrowseView * _imageBrowseView; // +0x90
}
- (id)initWithChatBotAllMemoryListInfo:(id)arg1;
- (void)viewDidLoad;
- (void)close;
- (void)viewWillAppear:(BOOL)arg1;
- (id)formatTimestampToDateString:(double)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)backBtn;
- (void)setBackBtn:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)imageBrowseView;
- (void)setImageBrowseView:(id)arg1;
- (void).cxx_destruct;
@end
