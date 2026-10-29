@interface WCSpringWishButtonModel : NSObject
{
    BOOL _isSpringWished; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCSNSMessage * _message; // +0x18
    double _maxWidth; // +0x20
}
- (BOOL)isSpringWished;
- (void)setIsSpringWished:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)message;
- (void)setMessage:(id)arg1;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void).cxx_destruct;
@end
