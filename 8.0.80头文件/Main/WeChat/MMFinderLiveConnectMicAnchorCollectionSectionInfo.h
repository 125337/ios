@interface MMFinderLiveConnectMicAnchorCollectionSectionInfo : NSObject
{
    BOOL _isExpand; // +0x8
    BOOL _show; // +0x9
    BOOL _hasConnectingUser; // +0xa
    unsigned long long _type; // +0x10
    NSMutableArray * _data; // +0x18
    NSMutableArray * _displayItems; // +0x20
}
- (BOOL)isLoadingSection;
- (BOOL)useSingleColumn;
- (BOOL)useDoubleColumn;
- (BOOL)showExpand;
- (BOOL)showTipsLabel;
- (BOOL)showConnectingOperation;
- (BOOL)show;
- (BOOL)isExpand;
- (id)updateDisplayItems;
- (id)expandCellTitle;
- (id)headerTitle;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (void)setIsExpand:(BOOL)arg1;
- (void)setShow:(BOOL)arg1;
- (BOOL)hasConnectingUser;
- (void)setHasConnectingUser:(BOOL)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)displayItems;
- (void)setDisplayItems:(id)arg1;
- (void).cxx_destruct;
@end
