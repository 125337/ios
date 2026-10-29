@interface WCTogetherFriendsListCell : WCTogetherBaseCell
{
    UILabel * _titleLabel; // +0x8
    UIView * _togetherFriendsListView; // +0x10
    InteractionLabel * _friendsNameLabel; // +0x18
    InteractionLabel * _friendsCountLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
}
+ (id)cellIdentifier;
+ (id)createTitleLabel;
+ (double)heightForViewItem:(id)arg1 inTableView:(id)arg2;
- (id)observingKeyPathsForViewModel;
- (void)updateValueForKeyPath:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)createHeaderViewWithSize:(double)arg1;
- (void)layoutSubviews;
- (void)friendsLabelClicked:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)togetherFriendsListView;
- (void)setTogetherFriendsListView:(id)arg1;
- (id)friendsNameLabel;
- (void)setFriendsNameLabel:(id)arg1;
- (id)friendsCountLabel;
- (void)setFriendsCountLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (void).cxx_destruct;
@end

