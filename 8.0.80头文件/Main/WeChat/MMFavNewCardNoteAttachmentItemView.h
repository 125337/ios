@interface MMFavNewCardNoteAttachmentItemView : UIView
{
    MMUIImageView * _thumbImageView; // +0x8
    UIImageView * _iconImageView; // +0x10
    MMUILabel * _durationLabel; // +0x18
}
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)configureWithDataField:(id)arg1;
- (void)configureMediaItemWithDataField:(id)arg1;
- (void)configureIconItemWithImage:(id)arg1;
- (void)configureFileItemWithDataField:(id)arg1;
- (id)thumbImageView;
- (void)setThumbImageView:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)durationLabel;
- (void)setDurationLabel:(id)arg1;
- (void).cxx_destruct;
@end
