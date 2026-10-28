@interface MMWebTransPack : NSObject
{
    BOOL _isPackInFirstScreen; // +0x8
    NSMutableArray * _nodeList; // +0x10
}
- (id)initWithNodeList:(id)arg1;
- (id)nodeList;
- (void)setNodeList:(id)arg1;
- (BOOL)isPackInFirstScreen;
- (void)setIsPackInFirstScreen:(BOOL)arg1;
- (void).cxx_destruct;
@end
