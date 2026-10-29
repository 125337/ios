@interface MMMapView : QMapView
{
    unsigned int _actionType; // +0x8
}
+ (BOOL)enableOverseaServerProtocol;
- (id)initWithFrame:(CGRect)arg1 config:(id)arg2;
- (void)setActionType:(unsigned int)arg1;
- (id)userLocation;
- (void)mapViewLogger:(id)arg1 logMessage:(id)arg2;
- (unsigned int)actionType;
@end

