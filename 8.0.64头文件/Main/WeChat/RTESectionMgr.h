@interface RTESectionMgr : MMObject <RTETextViewSectionDelegate>
{
    NSMutableString * m_contentString; // +0x8
    RTEContentStorage * m_storage; // +0x10
    NSMutableArray * m_sections; // +0x18
    NSMutableArray * m_cacheTextViews; // +0x20
    MMTimer * m_clearTextViewTimer; // +0x28
    unsigned long long m_cacheLocation; // +0x30
    unsigned long long m_cacheLocationIndex; // +0x38
    unsigned long long m_totalLength; // +0x40
    double m_cacheContentOffset; // +0x48
    unsigned long long m_cacheContentOffsetIndex; // +0x50
    double m_totalHeight; // +0x58
    unsigned long long m_currentIndex; // +0x60
    double m_currentOffset; // +0x68
    id <RTESectionMgrDelegate> _delegate; // +0x70
    double _lastCellExtendHeight; // +0x78
}
- (id)initWithContentStorage:(id)arg1;
- (unsigned long long)sectionCount;
- (unsigned long long)allParagraphCount;
- (BOOL)checkRangeValid:(_NSRange)arg1;
- (double)calculateTotalSectionHeight;
- (double)totalHeightToIndex:(unsigned long long)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;
- (double)cellHeightAtIndex:(unsigned long long)arg1;
- (id)viewAtLocation:(unsigned long long)arg1;
- (void)updateContentOffset:(double)arg1;
- (void)removeAllView;
- (void)reloadContentAtRange:(_NSRange)arg1 needRegenerateContent:(BOOL)arg2;
- (id)getTextAttachmentForAttribute:(id)arg1;
- (id)copySectionAtRange:(_NSRange)arg1;
- (id)replaceContentAtRange:(_NSRange)arg1 atSection:(unsigned long long)arg2 withText:(id)arg3;
- (id)appendText:(id)arg1;
- (id)appendSections:(id)arg1 withText:(id)arg2;
- (id)replaceTextAtRange:(_NSRange)arg1 withText:(id)arg2;
- (id)replaceSectionsAtRange:(_NSRange)arg1 withSections:(id)arg2 withText:(id)arg3;
- (id)getAllContent;
- (void)chectAndClearCacheViews;
- (void)updateCacheViewsWithSectionChangeInfo:(id)arg1;
- (void)generateCellViewAtIndex:(unsigned long long)arg1 withView:(id)arg2 needResize:(BOOL)arg3;
- (void)updateCacheOffsetToOffset:(double)arg1;
- (void)updateCacheLocationToLocation:(unsigned long long)arg1;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (double)contentOffsetAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationOfSectionAtIndex:(unsigned long long)arg1;
- (void)onUpdateTextView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (double)lastCellExtendHeight;
- (void)setLastCellExtendHeight:(double)arg1;
- (void).cxx_destruct;
@end
