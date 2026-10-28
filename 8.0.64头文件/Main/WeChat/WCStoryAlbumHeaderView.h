@interface WCStoryAlbumHeaderView : UICollectionReusableView
{
    MMUILabel * _albumTimeLabel; // +0x8
    MMUILabel * _albumYearLabel; // +0x10
    NSArray * _monthArray; // +0x18
}
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (id)monthArray;
- (void)setTimeStr:(id)arg1 showYearLabel:(BOOL)arg2;
- (BOOL)isTodayOrYesterday:(id)arg1;
- (id)albumTimeLabel;
- (void)setAlbumTimeLabel:(id)arg1;
- (id)albumYearLabel;
- (void)setAlbumYearLabel:(id)arg1;
- (void)setMonthArray:(id)arg1;
- (void).cxx_destruct;
@end
