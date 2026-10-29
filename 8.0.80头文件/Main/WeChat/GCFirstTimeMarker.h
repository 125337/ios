@interface GCFirstTimeMarker : NSObject
{
    BOOL _firstTimeAccess; // +0x8
}
- (id)init;
- (BOOL)isFirstTimeAccess;
- (BOOL)firstTimeAccess;
- (void)setFirstTimeAccess:(BOOL)arg1;
@end
