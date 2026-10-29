@interface QPolylineViewPasspointPayload : NSObject
{
    BOOL _clearColor; // +0x8
    int _index; // +0xc
    struct _coordinate; // +0x10
}
- (int)index;
- (void)setIndex:(int)arg1;
- (struct)coordinate;
- (void)setCoordinate:(struct)arg1;
- (BOOL)clearColor;
- (void)setClearColor:(BOOL)arg1;
@end
