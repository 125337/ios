@interface WCFinderClubPermissionInfo : NSObject <PBCoding>
{
    BOOL _shouldShowChatroomNewRedDot; // +0x8
    BOOL _shouldShowChatroomInfoNewRedDot; // +0x9
}
+ (void)PBArrayAdd_shouldShowChatroomNewRedDot;
+ (void)PBArrayAdd_shouldShowChatroomInfoNewRedDot;
+ (void)initialize;
- (id)getPBPropertyTable;
- (BOOL)shouldShowChatroomNewRedDot;
- (void)setShouldShowChatroomNewRedDot:(BOOL)arg1;
- (BOOL)shouldShowChatroomInfoNewRedDot;
- (void)setShouldShowChatroomInfoNewRedDot:(BOOL)arg1;
@end
