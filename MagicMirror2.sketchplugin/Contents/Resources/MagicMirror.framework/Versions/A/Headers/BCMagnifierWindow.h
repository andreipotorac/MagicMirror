//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@interface BCMagnifierWindow : NSWindow
{
    struct CGRect _screenFrame;
}

- (void)flagsChanged;
- (struct CGRect)frameForWindowAroundMouse;
- (id)initWithScreenGrab:(id)arg1;
- (void)mouseMovedTo:(struct CGPoint)arg1;
@property(nonatomic) struct CGRect screenFrame; // @synthesize screenFrame=_screenFrame;
- (void)setCurrentColor:(id)arg1;
- (void)setScreenGrab:(id)arg1;

@end

