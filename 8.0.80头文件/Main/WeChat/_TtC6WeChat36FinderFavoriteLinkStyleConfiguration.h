@interface _TtC6WeChat36FinderFavoriteLinkStyleConfiguration : NSObject <WCFinderViewSizable>
{
     identifier; // +0x8
     coverURL; // +0x10
     title; // +0x20
     feedCount; // +0x30
     nickname; // +0x38
     displayTime; // +0x48
     onDeleteAction; // +0x58
     onLongPress; // +0x68
     isHighlighted; // +0x78
}
- (id)initWithIdentifier:(unsigned long long)arg1 coverURL:(id)arg2 title:(id)arg3 feedCount:(long long)arg4 nickname:(id)arg5 displayTime:(id)arg6;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (long long)hash;
- (id)init;
- (void).cxx_destruct;
@end
