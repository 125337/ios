@interface WCJSFrame : NSObject
{
    int _line; // +0x8
    int _column; // +0xc
    int _repeatCount; // +0x10
    NSString * _name; // +0x18
    NSString * _path; // +0x20
    NSMutableArray * _subFrames; // +0x28
}
- (id)initWithRepeatCount:(int)arg1 name:(id)arg2 path:(id)arg3 line:(int)arg4 column:(int)arg5;
- (void)addSubFrame:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)makeInfoDict;
- (id)name;
- (void)setName:(id)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (int)line;
- (void)setLine:(int)arg1;
- (int)column;
- (void)setColumn:(int)arg1;
- (int)repeatCount;
- (void)setRepeatCount:(int)arg1;
- (id)subFrames;
- (void)setSubFrames:(id)arg1;
- (void).cxx_destruct;
@end

