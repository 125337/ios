@interface MMFinderLiveConnectMicAnchorSectionInfo : NSObject
{
    BOOL _isExpand; // +0x8
    BOOL _show; // +0x9
    unsigned long long _type; // +0x10
    NSMutableArray * _data; // +0x18
}
- (BOOL)showExpand;
- (BOOL)show;
- (id)displayItems;
- (id)expandCellTitle;
- (id)headerTitle;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (BOOL)isExpand;
- (void)setIsExpand:(BOOL)arg1;
- (void)setShow:(BOOL)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (void).cxx_destruct;
@end
