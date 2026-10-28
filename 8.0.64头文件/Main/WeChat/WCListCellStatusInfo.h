@interface WCListCellStatusInfo : NSObject
{
    BOOL _showsPrivateStatus; // +0x8
    BOOL _showsGroupedStatus; // +0x9
    BOOL _showsStarredStatus; // +0xa
    BOOL _showsFailureStatus; // +0xb
    BOOL _showsLivePhotoStatus; // +0xc
    WCDataItem * _dataItem; // +0x10
    WCCellGroup * _group; // +0x18
    WCCellGroupItem * _groupItem; // +0x20
}
+ (id)statusInfoWithDataItem:(id)arg1 inGroup:(id)arg2 groupItem:(id)arg3;
- (id)initWithDataItem:(id)arg1 inGroup:(id)arg2 groupItem:(id)arg3;
- (void)resetStatuses;
- (void)calculateStatuses;
- (id)dataItem;
- (id)group;
- (id)groupItem;
- (BOOL)showsPrivateStatus;
- (BOOL)showsGroupedStatus;
- (BOOL)showsStarredStatus;
- (BOOL)showsFailureStatus;
- (BOOL)showsLivePhotoStatus;
- (void).cxx_destruct;
@end
