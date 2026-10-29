@interface WAAgentFileBubbleView : UIView
{
    WAAgentFileItem * _fileItem; // +0x8
    UIImageView * _iconView; // +0x10
    UILabel * _nameLabel; // +0x18
    UILabel * _infoLabel; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)fileItem;
- (void)setFileItem:(id)arg1;
- (id)iconView;
- (void)setIconView:(id)arg1;
- (id)nameLabel;
- (void)setNameLabel:(id)arg1;
- (id)infoLabel;
- (void)setInfoLabel:(id)arg1;
- (void).cxx_destruct;
@end
