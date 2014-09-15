//
//  NNPagingScrollViewController.h
//  PagingScrollViewDemo
//
//  Created by Nhan Nguyen on 9/15/14.
//  Copyright (c) 2014 Nhan Nguyen. All rights reserved.
//

#import <UIKit/UIKit.h>

// delegate for NNPagingScrollView
@protocol NNPagingScrollViewControllerDelegate <NSObject>

- (UIScrollView *)mainPagingScrollView;
- (NSArray *)childViewControllers;
- (NSUInteger)numberOfPagesInScrollView;


@end
                                         
@interface NNPagingScrollViewController : UIViewController <UIScrollViewDelegate>

@property (strong, nonatomic) UIScrollView *scrollView;
@property (strong, nonatomic) UIPageControl *pageControl;

@end