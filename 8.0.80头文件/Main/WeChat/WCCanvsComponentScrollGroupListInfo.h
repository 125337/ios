@interface WCCanvsComponentScrollGroupListInfo : MMObject <NSCoding>
{
    int _pageCtrType; // +0x8
    int _isFullScreen; // +0xc
    int _autoCarousel; // +0x10
    int _enterViewIndex; // +0x14
    NSArray * _componentGroupList; // +0x18
}
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)componentGroupList;
- (void)setComponentGroupList:(id)arg1;
- (int)pageCtrType;
- (void)setPageCtrType:(int)arg1;
- (int)isFullScreen;
- (void)setIsFullScreen:(int)arg1;
- (int)autoCarousel;
- (void)setAutoCarousel:(int)arg1;
- (int)enterViewIndex;
- (void)setEnterViewIndex:(int)arg1;
- (void).cxx_destruct;
@end
