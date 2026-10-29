@interface MMFinderLiveReservedRecordNoticeInfoCell : UITableViewCell <WCFinderLiveNoticeViewDelegate, MMFinderLiveReservedRecordViewDelegate, WCFinderLiveExt>
{
    id <MMFinderLiveReservedRecordNoticeInfoCellDelegate> _delegate; // +0x8
    FinderLiveReservedNoticeRecord * _reservedNoticeRecord; // +0x10
    MMFinderLiveReservedRecordView * _noticeView; // +0x18
    UIView * _bottomLine; // +0x20
}
+ (id)defaultCellIdentifier;
+ (double)heightForReservedNoticeRecord:(id)arg1 inTableView:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForReuse;
- (void)loadNoticeView;
- (void)setReservedNoticeRecord:(id)arg1;
- (void)updateAllValues;
- (void)layoutSubviews;
- (void)onFinderLiveNoticeWithNoticeId:(id)arg1 reserveStateChanged:(unsigned long long)arg2;
- (void)onLiveNoticeViewMainNoticeButtonClicked:(id)arg1;
- (void)onLiveNoticeViewActionButtonClicked:(id)arg1;
- (void)onReservedRecordViewAnchorInfoTapped:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)reservedNoticeRecord;
- (id)noticeView;
- (void)setNoticeView:(id)arg1;
- (id)bottomLine;
- (void)setBottomLine:(id)arg1;
- (void).cxx_destruct;
@end
