@interface MiniTaskCollectionCellViewModel : MMObject
{
    BOOL _isOutdate; // +0x8
    BOOL _isCellVisible; // +0x9
    BOOL _showScheduleOptions; // +0xa
    BOOL _hasNotifyUpdateSnapshot; // +0xb
    id <MiniTaskCollectionCellViewModelDelegate> _delegate; // +0x10
    long long _type; // +0x18
    NSString * _title; // +0x20
    NSString * _subtitle; // +0x28
    NSString * _headerImageUrl; // +0x30
    NSString * _footerText; // +0x38
    NSString * _taskTitleTail; // +0x40
    UIImage * _headerImage; // +0x48
    UIImage * _headerDefaultImage; // +0x50
    NSMutableArray * _titleStyle; // +0x58
    NSMutableArray * _titleStyleForOneCell; // +0x60
    NSMutableArray * _subtitleStyle; // +0x68
    NSMutableArray * _subtitleStyleForOneCell; // +0x70
    MinimizeTaskData * _taskData; // +0x78
    WCScheduleItem * _scheduleItem; // +0x80
    UIImage * _snapshotImage; // +0x88
}
+ (id)minimizeDataToModel:(id)arg1;
+ (id)scheduleDataToModel:(id)arg1;
- (void)updateOutdateState;
- (void)onMemoryWarning;
- (void)asyncLoadSnapshot:(id /* block */)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)type;
- (void)setType:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)headerImageUrl;
- (void)setHeaderImageUrl:(id)arg1;
- (id)footerText;
- (void)setFooterText:(id)arg1;
- (id)taskTitleTail;
- (void)setTaskTitleTail:(id)arg1;
- (id)headerImage;
- (void)setHeaderImage:(id)arg1;
- (id)headerDefaultImage;
- (void)setHeaderDefaultImage:(id)arg1;
- (id)titleStyle;
- (void)setTitleStyle:(id)arg1;
- (id)titleStyleForOneCell;
- (void)setTitleStyleForOneCell:(id)arg1;
- (id)subtitleStyle;
- (void)setSubtitleStyle:(id)arg1;
- (id)subtitleStyleForOneCell;
- (void)setSubtitleStyleForOneCell:(id)arg1;
- (BOOL)isOutdate;
- (void)setIsOutdate:(BOOL)arg1;
- (BOOL)isCellVisible;
- (void)setIsCellVisible:(BOOL)arg1;
- (BOOL)showScheduleOptions;
- (void)setShowScheduleOptions:(BOOL)arg1;
- (id)taskData;
- (void)setTaskData:(id)arg1;
- (id)scheduleItem;
- (void)setScheduleItem:(id)arg1;
- (id)snapshotImage;
- (void)setSnapshotImage:(id)arg1;
- (BOOL)hasNotifyUpdateSnapshot;
- (void)setHasNotifyUpdateSnapshot:(BOOL)arg1;
- (void).cxx_destruct;
@end

