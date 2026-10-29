@interface GameRedDotProvider : NSObject <IFindFriendRedDotProvider>
{
    BOOL m_useFinderReddot; // +0x8
}
- (id)initWithUseFinderRedDot:(BOOL)arg1;
- (id)checkToGetRedDotInfo;
@end

