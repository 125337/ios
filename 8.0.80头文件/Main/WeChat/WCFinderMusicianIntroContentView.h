@interface WCFinderMusicianIntroContentView : UICollectionViewCell <WCFinderSingleMusicianInfoViewDelegate, WCFinderMultiMusicianInfoViewDelegate>
{
    id <WCFinderMusicianIntroContentViewDelegate> _delegate; // +0x8
    UIView * _topContentView; // +0x10
    UILabel * _titleLabel; // +0x18
    WCFinderSingleMusicianInfoView * _singleMusicianView; // +0x20
    WCFinderMultiMusicianInfoView * _multiMusicianView; // +0x28
}
+ (id)buildSingleMusicianViewByWidth:(double)arg1 delegate:(id)arg2;
+ (double)cellHeightByWidth:(double)arg1 singerInfoArray:(id)arg2 expand:(BOOL)arg3;
+ (id)reuseIdentifier;
- (id)initWithFrame:(CGRect)arg1;
- (id)topContentView;
- (id)titleLabel;
- (id)singleMusicianView;
- (id)multiMusicianView;
- (void)updateWithSingerInfoArray:(id)arg1 expand:(BOOL)arg2;
- (void)onSingleMusicianClickSingerContact:(id)arg1;
- (void)onSingleMusicianSignatureExpand:(BOOL)arg1;
- (void)onSingleMusicianClickSignatureAtText:(id)arg1;
- (void)onMultiMusicianClickSingerContact:(id)arg1;
- (void)onMultiMusicianCard:(id)arg1 singerInfo:(id)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setTopContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setSingleMusicianView:(id)arg1;
- (void)setMultiMusicianView:(id)arg1;
- (void).cxx_destruct;
@end
