@interface WCFinderModifyHistoryCardView : MMUIView
{
    UILabel * _videoCoverLabel; // +0x8
    UILabel * _coverPersonalLabel; // +0x10
    UILabel * _coverShareLabel; // +0x18
    UILabel * _contentDescLabel; // +0x20
    UILabel * _contentShortLabel; // +0x28
    UILabel * _locationLabel; // +0x30
    UILabel * _postTimeLabel; // +0x38
    MMWebImageView * _coverImageView; // +0x40
    MMWebImageView * _shareImageView; // +0x48
    RichTextView * _longDescTextView; // +0x50
    RichTextView * _shortDescTextView; // +0x58
    RichTextView * _locationTextView; // +0x60
    RichTextView * _editTimeTextView; // +0x68
}
+ (id)buildTitleLabel;
+ (id)buildSeparateLine;
+ (void)setUpCoverImageViewFrom:(id)arg1 targetImage:(id)arg2;
+ (id)downloadFileWithURL:(id)arg1 type:(unsigned long long)arg2;
+ (void)loadCoverWithFeedRecordInfo:(id)arg1 loadBlock:(id /* block */)arg2;
- (id)initWithFrame:(CGRect)arg1;
- (id)shareImageView;
- (id)postTimeLabel;
- (id)locationLabel;
- (id)contentShortLabel;
- (id)contentDescLabel;
- (id)coverShareLabel;
- (id)coverPersonalLabel;
- (id)videoCoverLabel;
- (id)coverImageView;
- (id)longDescTextView;
- (id)shortDescTextView;
- (id)locationTextView;
- (id)editTimeTextView;
- (void)updateContentByFeedRecord:(id)arg1 imageList:(id)arg2;
- (void)setVideoCoverLabel:(id)arg1;
- (void)setCoverPersonalLabel:(id)arg1;
- (void)setCoverShareLabel:(id)arg1;
- (void)setContentDescLabel:(id)arg1;
- (void)setContentShortLabel:(id)arg1;
- (void)setLocationLabel:(id)arg1;
- (void)setPostTimeLabel:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void)setShareImageView:(id)arg1;
- (void)setLongDescTextView:(id)arg1;
- (void)setShortDescTextView:(id)arg1;
- (void)setLocationTextView:(id)arg1;
- (void)setEditTimeTextView:(id)arg1;
- (void).cxx_destruct;
@end
