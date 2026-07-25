package library;

import java.util.ArrayList;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        // 모든 파일에서 공유할 도서 리스트 생성
        ArrayList<Book> library = new ArrayList<>();

        // 기본 도서 3권 세팅
        library.add(new Book(1, "파이토치를 활용한 딥러닝 아키텍처", "김인공"));
        library.add(new Book(2, "최적화 알고리즘의 이해", "이연산"));
        library.add(new Book(3, "하드/소프트 실시간 컴퓨팅", "박시스템"));

        boolean isRunning = true;

        while (isRunning) {
            System.out.println("\n=== 📚 도서 관리 프로그램 ===");
            System.out.println("1. 도서 등록");
            System.out.println("2. 전체 목록 조회");
            System.out.println("3. 도서 검색");
            System.out.println("4. 도서 삭제");
            System.out.println("5. 도서 대출");
            System.out.println("6. 도서 반납");
            System.out.println("7. 도서 정보 수정");
            System.out.println("0. 프로그램 종료");
            System.out.println("===============================");
            System.out.print("기능 선택: ");
            
            int choice = scanner.nextInt();

            switch (choice) {
                case 1: AddBook.execute(library, scanner); break;
                case 2: PrintAllBooks.execute(library, scanner); break;
                case 3: SearchBook.execute(library, scanner); break;
                case 4: DeleteBook.execute(library, scanner); break;
                case 5: BorrowBook.execute(library, scanner); break;
                case 6: ReturnBook.execute(library, scanner); break;
                case 7: UpdateBook.execute(library, scanner); break;
                case 0:
                    System.out.println("프로그램을 종료합니다.");
                    isRunning = false;
                    break;
                default:
                    System.out.println("잘못된 입력입니다. 0~7 사이의 숫자를 입력하세요.");
            }
        }
        scanner.close();
    }
}