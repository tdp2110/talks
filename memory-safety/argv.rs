fn main() {
    let argv: Vec<String> = std::env::args().collect();
    let index = argv[1].parse::<usize>().unwrap();
    println!("{}", argv[index]);
}
