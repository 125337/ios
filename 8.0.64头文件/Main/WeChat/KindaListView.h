@interface KindaListView : KindaView <MMKListView>
- (void)addHeader:(id)arg1;
- (void)addFooter:(id)arg1;
- (void)setImpl:(id)arg1;
- (void)setVertical:(BOOL)arg1;
- (BOOL)getVertical;
- (void)setShowScrollBar:(BOOL)arg1;
- (BOOL)getShowScrollBar;
- (void)setOnScrollCallback:(id)arg1;
@end
