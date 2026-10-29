@interface MMLimitedModeConfigViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, MMLimitedModeExt>
{
    NSString * _ticket; // +0x68
    long long _bizType; // +0x70
    long long _scene; // +0x78
    UIImageView * _iconImageView; // +0x80
    MMUILabel * _titleLabel; // +0x88
    RichTextView * _descLabel; // +0x90
    MMUILabel * _subTitleLabel; // +0x98
    UITableView * _tableView; // +0xa0
    NSArray * _sectionDatas; // +0xa8
}
- (id)initWithBizType:(long long)arg1 scene:(long long)arg2;
- (void)viewDidLoad;
- (id)navigationBarBackgroundColor;
- (void)reloadContent;
- (void)initUI;
- (void)setupLayout;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (void)onLimitedModeChanged;
- (void)onLimitedModeBizLevelChange:(long long)arg1 bizType:(long long)arg2;
- (void)onChangeLimitedModeFail;
- (void)jumpToBizFollowViewController;
- (id)descText;
- (id)extraDescText;
- (id)subTitleText;
- (id)ticket;
- (void)setTicket:(id)arg1;
- (long long)bizType;
- (void)setBizType:(long long)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)descLabel;
- (void)setDescLabel:(id)arg1;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg1;
- (id)tableView;
- (void)setTableView:(id)arg1;
- (id)sectionDatas;
- (void)setSectionDatas:(id)arg1;
- (void).cxx_destruct;
@end

