@interface KindaDashLineView : KindaView <MMKDashLineView>
{
    float _m_dashWidth; // +0xa8
    KindaDashLineUIView * _m_dashLineView; // +0xb0
    MMDynamicColor * _m_dashColor; // +0xb8
}
- (id)init;
- (id)getView;
- (void)setDashWidth:(float)arg1;
- (float)getDashWidth;
- (void)setDashColor:(id)arg1;
- (id)getDashColor;
- (BOOL)getVertical;
- (void)setVertical:(BOOL)arg1;
- (id)m_dashLineView;
- (void)setM_dashLineView:(id)arg1;
- (float)m_dashWidth;
- (void)setM_dashWidth:(float)arg1;
- (id)m_dashColor;
- (void)setM_dashColor:(id)arg1;
- (void).cxx_destruct;
@end

