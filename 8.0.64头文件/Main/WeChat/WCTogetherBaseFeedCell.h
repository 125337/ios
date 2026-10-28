@interface WCTogetherBaseFeedCell : WCTogetherBaseCell
{
    UIView * _infoView; // +0x8
    WCTogetherFeedCellContentView * _itemContentView; // +0x10
    UIView * _footerView; // +0x18
    MMHeadImageView * _authorHeaderView; // +0x20
    InteractionLabel * _authorNicknameLabel; // +0x28
    MMUILabel * _dateLabel; // +0x30
    TextStateItemView * _textStateView; // +0x38
    MMUILabel * _friendsLabel; // +0x40
    InteractionLabel * _locationLabel; // +0x48
}
+ (id)cellIdentifier;
+ (id)createFriendsLabel;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
+ (double)heightForItemContentViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (double)heightForFooterViewWithViewItem:(id)arg1 inTableView:(id)arg2;
+ (double)heightForTogetherTextWithViewItem:(id)arg1 withWidth:(double)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)createHeaderViewWithSize:(double)arg1;
- (void)loadInfoView;
- (void)loadItemContentView;
- (void)loadFooterView;
- (void)layoutSubviews;
- (void)layoutInfoView;
- (void)layoutItemContentView;
- (void)layoutFooterView;
- (void)headerViewDidClicked:(id)arg1;
- (void)nicknameLabelClicked:(id)arg1;
- (void)textStateViewClicked:(id)arg1;
- (void)contentDidTap;
- (void)locationLabelClicked:(id)arg1;
- (id)infoView;
- (void)setInfoView:(id)arg1;
- (id)itemContentView;
- (void)setItemContentView:(id)arg1;
- (id)footerView;
- (void)setFooterView:(id)arg1;
- (id)authorHeaderView;
- (void)setAuthorHeaderView:(id)arg1;
- (id)authorNicknameLabel;
- (void)setAuthorNicknameLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)textStateView;
- (void)setTextStateView:(id)arg1;
- (id)friendsLabel;
- (void)setFriendsLabel:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (void).cxx_destruct;
@end
