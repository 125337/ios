@interface WCFinderModifyHistoryCardView : MMUIView
{
    MMWebImageView * _coverImageView; // +0x8
    RichTextView * _longDescTextView; // +0x10
    RichTextView * _shortDescTextView; // +0x18
    RichTextView * _editTimeTextView; // +0x20
}
- (id)initWithFrame:(CGRect)arg1;
- (id)coverImageView;
- (id)longDescTextView;
- (id)shortDescTextView;
- (id)editTimeTextView;
- (void)updateWithFeedRecordInfo:(id)arg1 isInitial:(BOOL)arg2;
- (void)setCoverImageView:(id)arg1;
- (void)setLongDescTextView:(id)arg1;
- (void)setShortDescTextView:(id)arg1;
- (void)setEditTimeTextView:(id)arg1;
- (void).cxx_destruct;
@end

