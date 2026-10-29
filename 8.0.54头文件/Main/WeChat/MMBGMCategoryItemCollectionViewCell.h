@interface MMBGMCategoryItemCollectionViewCell : UICollectionViewCell
{
    UILabel * _titleLabel; // +0x8
    MMBGMCategoryItem * _item; // +0x10
    MMBGMPanelPublishContext * _publishContext; // +0x18
    MMBGMSelectedConfig * _panelConfig; // +0x20
}
+ (id)cellID;
- (id)initWithFrame:(CGRect)arg1;
- (void)setup;
- (id)genReportDict;
- (void)updateWithItem:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)item;
- (void)setItem:(id)arg1;
- (id)publishContext;
- (void)setPublishContext:(id)arg1;
- (id)panelConfig;
- (void)setPanelConfig:(id)arg1;
- (void).cxx_destruct;
@end

