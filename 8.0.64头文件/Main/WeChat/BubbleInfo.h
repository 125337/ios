@interface BubbleInfo : NSObject <NSCopying>
{
    NSRecursiveLock * m_lock; // +0x8
    NSMutableDictionary * m_bubbleCaches; // +0x10
    NSString * _bubbleName; // +0x18
    NSString * _bubbleNameHL; // +0x20
    unsigned long long _type; // +0x28
    unsigned long long _position; // +0x30
    UIEdgeInsets _edgeInsets; // +0x38
    UIEdgeInsets _margin; // +0x58
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)getBubbleImage:(BOOL)arg1 isDarkMode:(BOOL)arg2;
- (id)getBubbleImage:(BOOL)arg1;
- (id)getBubbleImage:(BOOL)arg1 isDarkMode:(BOOL)arg2 useCache:(BOOL)arg3;
- (id)getNewBubbleImage:(BOOL)arg1;
- (id)bubbleName;
- (void)setBubbleName:(id)arg1;
- (id)bubbleNameHL;
- (void)setBubbleNameHL:(id)arg1;
- (UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(UIEdgeInsets)arg1;
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)position;
- (void)setPosition:(unsigned long long)arg1;
- (UIEdgeInsets)margin;
- (void)setMargin:(UIEdgeInsets)arg1;
- (void).cxx_destruct;
@end
