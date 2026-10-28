@interface AmbViewNodeModel : NSObject
{
    long long _left; // +0x8
    long long _top; // +0x10
    long long _width; // +0x18
    long long _height; // +0x20
    NSMutableDictionary * _datas; // +0x28
    NSMutableArray * _childs; // +0x30
}
- (id)init;
- (id)toDic;
- (long long)left;
- (void)setLeft:(long long)arg1;
- (long long)top;
- (void)setTop:(long long)arg1;
- (long long)width;
- (void)setWidth:(long long)arg1;
- (long long)height;
- (void)setHeight:(long long)arg1;
- (id)datas;
- (void)setDatas:(id)arg1;
- (id)childs;
- (void)setChilds:(id)arg1;
- (void).cxx_destruct;
@end
