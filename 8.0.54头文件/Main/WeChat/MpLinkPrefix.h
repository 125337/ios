@interface MpLinkPrefix : NSObject
{
    NSString * _urlPrefix; // +0x8
    NSArray * _showTypeList; // +0x10
}
- (id)init;
- (id)initWithUrlPrefix:(id)arg1 showTypeList:(id)arg2;
- (id)urlPrefix;
- (void)setUrlPrefix:(id)arg1;
- (id)showTypeList;
- (void)setShowTypeList:(id)arg1;
- (void).cxx_destruct;
@end

