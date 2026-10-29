@interface WCFinderSearchEventTableViewCell : WCFinderTableViewCell <MMWebImageViewDelegate>
{
    UILabel * _eventNameLabel; // +0x8
    UILabel * _participateNumLabel; // +0x10
    MMWebImageView * _coverImageView; // +0x18
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)updateWithEventInfo:(id)arg1;
- (void)updateLayout;
- (id)eventNameLabel;
- (id)participateNumLabel;
- (id)coverImageView;
- (void)onLoadImageOK:(id)arg1;
- (void)setEventNameLabel:(id)arg1;
- (void)setParticipateNumLabel:(id)arg1;
- (void)setCoverImageView:(id)arg1;
- (void).cxx_destruct;
@end
