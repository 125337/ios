@interface MJTemplateListSvrDataCacheModel : NSObject
{
    double _fetchTimeStamp; // +0x8
    unsigned int _validityTerm; // +0x10
    unsigned long long _scene; // +0x18
    NSMutableArray * _templateList; // +0x20
    NSMutableArray * _categoryList; // +0x28
    NSData * _pageBuffer; // +0x30
}
- (id)init;
- (void)setValidityTerm:(unsigned int)arg1;
- (BOOL)isValid;
- (unsigned long long)scene;
- (void)setScene:(unsigned long long)arg1;
- (unsigned int)validityTerm;
- (id)templateList;
- (void)setTemplateList:(id)arg1;
- (id)categoryList;
- (void)setCategoryList:(id)arg1;
- (id)pageBuffer;
- (void)setPageBuffer:(id)arg1;
- (void).cxx_destruct;
@end
