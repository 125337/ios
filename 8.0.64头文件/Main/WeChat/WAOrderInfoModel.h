@interface WAOrderInfoModel : MMObject
{
    BOOL _showRedSpots; // +0x8
}
- (id)initWithWxaOrderInfoResp:(id)arg1;
- (BOOL)showRedSpots;
- (void)setShowRedSpots:(BOOL)arg1;
@end
