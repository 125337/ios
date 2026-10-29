@interface RTEAttachmentViewProvider : MMObject <RTEAttachmentViewDelegate>
{
    NSMutableDictionary * m_registerViewDictionary; // +0x8
    NSMutableDictionary * m_activeAttachmentViews; // +0x10
    NSMutableDictionary * m_reuseAttachmentViews; // +0x18
    NSMutableArray * m_pendingReuseAttachmentViews; // +0x20
    MMTimer * m_clearTimer; // +0x28
    NSDate * m_lastResuseDate; // +0x30
    id <RTEAttachmentViewProviderDelegate> _delegate; // +0x38
    Class _defaultViewClass; // +0x40
    unsigned long long _colorType; // +0x48
}
- (id)init;
- (void)setDefaultViewClass:(Class)arg1;
- (void)registerAttachmentViewClass:(Class)arg1 forAttachmentType:(unsigned int)arg2;
- (id)activeAttachmentViewsForType:(unsigned int)arg1;
- (id)reuseAttachmentViewsForType:(unsigned int)arg1;
- (id)getViewForAttribute:(id)arg1;
- (id)getViewForAttachment:(id)arg1;
- (void)invalidViewForAttachment:(id)arg1;
- (void)didRemoveAttachmentView:(id)arg1;
- (void)updateContentOffset:(CGPoint)arg1 inSuperView:(id)arg2;
- (id)getAllAttachmentViewOfType:(unsigned int)arg1;
- (void)reLayoutAllAttachmentView;
- (void)tryReuseAttachmentView:(id)arg1;
- (void)clearPendingReuseView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (Class)defaultViewClass;
- (unsigned long long)colorType;
- (void)setColorType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
