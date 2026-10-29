@interface QIntersectionOverlayManager : NSObject
{
    QMapContext * _context; // +0x8
    NSMutableArray * _container; // +0x10
}
- (void)addInterSectionOverlay:(id)arg1;
- (void)removeInterSectionOverlay:(id)arg1;
- (void)setIntersectionOverlayVisible:(BOOL)arg1 overlayID:(int)arg2;
- (id)payloadForOverlay:(id)arg1;
- (id)init;
- (id)context;
- (void)setContext:(id)arg1;
- (id)container;
- (void)setContainer:(id)arg1;
- (void).cxx_destruct;
@end

