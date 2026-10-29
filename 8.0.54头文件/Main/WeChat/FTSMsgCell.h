@interface FTSMsgCell : MMTableViewCell
{
    FTSMsgItem * _msgItem; // +0x8
    unsigned long long _mergeCount; // +0x10
    NSString * _searchText; // +0x18
    NSArray * _arrKeyword; // +0x20
    NSString * _sessionUsername; // +0x28
    MMHeadImageView * _headImageView; // +0x30
    AttributeLabel * _displayNameLabel; // +0x38
    AttributeLabel * _detailLabel; // +0x40
    MMUILabel * _timeLabel; // +0x48
    MMUILabel * _prefixDetailLabel; // +0x50
    MMImageView * _iconNamePostfix; // +0x58
    MMUILabel * _labelNamePostfix; // +0x60
    BOOL _hiddenMode; // +0x68
    FTSMsgCellStyle * _cellStyleInfo; // +0x70
    UIImage * m_defaultOpenimGroupIcon; // +0x78
    BOOL _bGroupMemberMsg; // +0x80
    unsigned long long _cellStyle; // +0x88
}
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 hiddenMode:(BOOL)arg3;
- (void)initView;
- (void)initCellStyle;
- (void)updateCellStyle;
- (void)setCellStyle:(unsigned long long)arg1;
- (BOOL)isTrailSurrogates:(unsigned short)arg1;
- (id)getDetailTextWithMsgWrap:(id)arg1;
- (void)updateDetailTextAsMergeCount;
- (void)updateDetailTextAsMsgContent:(id)arg1 sessionPrefix:(id)arg2 highlighted:(BOOL)arg3;
- (void)updateStatus:(BOOL)arg1;
- (void)updateTimeLabel;
- (void)updateMsgItem:(id)arg1 withSessionUserName:(id)arg2 searchText:(id)arg3 keywords:(id)arg4 mergeCount:(unsigned long long)arg5;
- (void)updateIconNamePostfixWithContact:(id)arg1;
- (void)layoutSubviews;
- (id)searchText;
- (void)setSearchText:(id)arg1;
- (id)arrKeyword;
- (void)setArrKeyword:(id)arg1;
- (BOOL)hiddenMode;
- (void)setHiddenMode:(BOOL)arg1;
- (BOOL)bGroupMemberMsg;
- (void)setBGroupMemberMsg:(BOOL)arg1;
- (unsigned long long)cellStyle;
- (void).cxx_destruct;
@end

